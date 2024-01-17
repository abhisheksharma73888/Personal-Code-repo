import argparse

parser = argparse.ArgumentParser()
parser.add_argument('-r', '--release', help="release number")
parser.add_argument('-b', '--build', help="build number")
args = parser.parse_args()

var = "{0}, {1}".format(args.build, args.release)
print (var)
