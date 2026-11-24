# Compare with ComputeAndInterpretBMI.c from week 2

KILOGRAMS_PER_POUND = 0.4535923
METERS_PER_INCH = 0.0254

weight = float(input("Enter weight in pounds: "))

height = float(input("Enter height in inches: "))

weightInKilograms = weight * KILOGRAMS_PER_POUND
heightInMeters = height * METERS_PER_INCH
bmi = weightInKilograms / (heightInMeters * heightInMeters)

# Print BMI to 2 decimal places
print ("BMI is %.2f" % bmi, end=" ")

if bmi < 18.5:
    print ("(underweight)")
elif bmi < 25:
    print ("(normal)")
elif bmi < 30:
    print ("(overweight)")
else:
    print ("(obese)")
