# create a mapping of state to abbreviation

states = {
 'Oregon': 'OR',
 'Florida': 'FL',
 'California': 'CA',
 'Ner York': 'NY',
 'Michigan': 'MI'
 }
 
# create a basic set of states and some cities in them
cities = {
 'CA': 'San Francisco',
 'MI': 'Detroit',
 'FL': 'Jacksonville'
}

# add some more cities
print '-' * 10
print "Michigan's abbreviation is: ", states['Michigan']
print "Florida's abbreviation is: ", statse['Florida']

# do it by using the state then cities dict 
print '-' * 10
print "Michigan has: ", cities[states['Michigan']]
print "florida has: ", cities[states['Florida']]

# orubr evety city in state
print '-' * 10
for state, abbrev in states.items():
 print "%s state is abbreviated %s and has city %s" %(
  state, abbrev, citise[abbrev])

print '-' * 10
# safely get a abbreviation by state that mighe not be there
state = states.get('Texas', None)

if not state:
 print "Sorry, no Texas."

# get a city with a default value
city = cities.get('TX', 'Does Not Exist')
print "The city for the state 'TX' is: %s" % city 