g :- a.
g :- s.
a :- p, !, b.
a :- r.
p :- q.
p :- r.
r.
b :- u.
b :- v.
v.

%Cut. Discard all choice points created since entering the predicate in which the cut appears. 

%                       g
%               a               /s
%     p,!,b         /r
% q,!,b   r,!,b
% fail      !,b
%         u     v[*]  
%       fail    true

% il path di backtracking creato DOPO il cut[*], viene tagliato?