#!/usr/bin/env python3

# This method takes a dictionary associating first names with last names as a param-eter.
# It will build an array with the full names of the people, with the first letter capi-talized. It returns this array.
def array_of_names(dict):
    names = []
    for key, value in dict.items():
        names.append(key.capitalize() + " " + value.capitalize())
    return names

persons = {
    "jean": "valjean",
    "grace": "hopper",
    "xavier": "niel",
    "fifi": "brindacier"
}

print(array_of_names(persons))