/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSScriptWhoseTest.h>

@class NSScriptObjectSpecifier;

@interface NSSpecifierTest : NSScriptWhoseTest {

	unsigned long long _comparisonOperator;
	NSScriptObjectSpecifier* _object1;
	id _object2;

}
+(id)_specifierTestFromDescriptor:(id)arg1 ;
-(id)_initFromRecord:(id)arg1 ;
-(char)isTrue;
-(id)initWithObjectSpecifier:(id)arg1 comparisonOperator:(unsigned long long)arg2 testObject:(id)arg3 ;
-(char)_testWithComparisonOperator:(unsigned long long)arg1 object1:(id)arg2 object2:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

