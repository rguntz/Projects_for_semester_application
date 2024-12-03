from typing import NewType, Tuple

ComparisonOutcome = NewType("ComparisonOutcome", str)
""" The type of comparison outcomes """
FIRST_PREFERRED = ComparisonOutcome("first_preferred")
""" We prefer the first option. """
SECOND_PREFERRED = ComparisonOutcome("second_preferred")
""" We prefer the second option. """
INDIFFERENT = ComparisonOutcome("indifferent")
""" We are indifferent among the two options. """


def compare_lexicographic(a: Tuple[float], b: Tuple[float]) -> ComparisonOutcome:
    """
    Implement here your solution.
    The two tuples represent two vectors of outcomes (e.g. different cost function realizations) for two different decisions.
    Which one is preferred?

    Note that the terms are sorted lexicographically by importance.
    For example, the term in position 1 is less important than the one in position 0,
    but more important than the one in position 2
    """
    # todo: implement the comparison

    if not a and not b:
        return INDIFFERENT
    if not a:
        return SECOND_PREFERRED
    if not b:
        return FIRST_PREFERRED

    # Compare the first elements
    if a[0] < b[0]:
        return FIRST_PREFERRED
    elif a[0] > b[0]:
        return SECOND_PREFERRED
    else:
        # If equal, compare the rest of the tuples recursively
        return compare_lexicographic(a[1:], b[1:])