import pytest

def test_printme():
    print("Testing Begins")
@pytest.mark.math
def test_product():
    assert 4 * 5 == 20
@pytest.mark.xfail
def test_increment():
    assert 4+2 == 7
@pytest.mark.skip
def test_login():
    print("LOGIN")

def test_logoff():
    print("logoff")