%PREDICATES
cat(tom).
dances(lili).

%rules
happy(X) :- dances(X).

%queries
% cat(X). -> X=tom
% cat(tom). -> true
% happy(lili). -> true
% happy(X). -> X=lili
% dances(lili). -> true
% dances(X). -> X=lili