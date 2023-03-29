import pytest
@pytest.fixture(autouse=True)
def initialize():
    print("\n \n \n Array functions")
    yield
    print("Ending the array functions")

