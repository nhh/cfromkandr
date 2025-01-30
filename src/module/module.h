#pragma once

// Its like an interface
typedef struct {
    // return_value (name) (args)
    void (*Increment)(void);
} Module;

Module New();
