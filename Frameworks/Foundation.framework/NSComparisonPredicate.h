/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSPredicateOperator, NSExpression;

@interface NSComparisonPredicate : NSPredicate  {
    void *_reserved2;
    NSPredicateOperator *_predicateOperator;
    NSExpression *_lhs;
    NSExpression *_rhs;
}

+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned int)arg3 type:(unsigned int)arg4 options:(unsigned int)arg5;
+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned int)arg3 type:(unsigned int)arg4 options:(unsigned int)arg5;
- (void)setPredicateOperator:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)predicateOperator;
- (unsigned int)predicateOperatorType;
- (unsigned int)comparisonPredicateModifier;
- (id)leftExpression;
- (id)rightExpression;
- (unsigned int)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (SEL)customSelector;
- (void)_acceptExpressions:(id)arg1 flags:(unsigned int)arg2;
- (void)_acceptOperator:(id)arg1 flags:(unsigned int)arg2;
- (id)keyPathExpressionForString:(id)arg1;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)generateMetadataDescription;
- (BOOL)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2;
- (id)minimalFormInContext:(id)arg1;

@end