/// # Practice Questions

/// ## Q1
const calculatePremium = (health, age, residense, sex, policyAmount) => {
  let premium = 0;
  if (health == "excellent" && age > 25 && age < 35 && residense == "city") {
    if (sex == "female" && policyAmount > 100000) return [false, 0];
    if (policyAmount > 200000) return [false, 0];
    premium = (policyAmount / 1000) * 4;
  } else if (
    (health == "poor", age > 25 && age < 35 && residense == "village")
  ) {
    if (policyAmount > 10000) return [false, 0];
    premium = (policyAmount / 1000) * 6;
  } else return [false, 0];
  return [true, premium];
};

// ## Q2
const 