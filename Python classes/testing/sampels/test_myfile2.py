import pytest
@pytest.mark.math
def test_myfunction():
    print("3.142")
@pytest.mark.skip
def test_newfuntion():
    print("Hello world")