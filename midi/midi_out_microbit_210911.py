# MicroBit MicroPython MIDI OUT TEST / Mårten Nettelbladt / 2021-09-11
# Accelerometer X: Pitch
# Accelerometer Y: Tempo + Velocity

from microbit import *

MIDI_NOTE_ON      = 0x90
MIDI_NOTE_OFF     = 0x80
MIDI_CHAN_MSG     = 0xB0
MIDI_CHAN_BANK    = 0x00
MIDI_CHAN_VOLUME  = 0x07
MIDI_CHAN_PROGRAM = 0xC0

def midiSetInstrument(chan, inst):
    if chan > 15:
        return
    inst -= 1
    if inst > 127:
        return
    msg = bytes([MIDI_CHAN_PROGRAM | chan, inst])
    uart.write(msg)

def midiNoteOn(chan, n, vel):
    if chan > 15:
        return
    if n > 127:
        return
    if vel > 127:
        return
    msg = bytes([MIDI_NOTE_ON | chan, n, vel])
    uart.write(msg)

def midiNoteOff(chan, n, vel):
    if chan > 15:
        return
    if n > 127:
        return
    if vel > 127:
        return
    msg = bytes([MIDI_NOTE_OFF | chan, n, vel])
    uart.write(msg)

def Start():
    uart.init(baudrate=31250, bits=8, parity=None, stop=1, tx=pin0)


Start()
while True:
    #midiSetInstrument(0,1)

    # Pitch
    i = (accelerometer.get_x() // 50) + 50

    # Velocity + tempo
    j = (accelerometer.get_y() // 30) + 70
    
    midiNoteOn(0, i, j)
    sleep(200 - j)
    midiNoteOff(0, i, 127)
