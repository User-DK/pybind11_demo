import pytest
import pybind11_demo as pd11

def test_add():
    assert pd11.pybind11_add.add(4,5) == 9
    # assert pd11.pybind11_add.add(4,3) == 3
