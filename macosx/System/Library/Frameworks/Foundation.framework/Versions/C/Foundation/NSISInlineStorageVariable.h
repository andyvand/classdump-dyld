/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSISVariable.h>
#import <Foundation/NSISVariableDelegate.h>

@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {

	NSString* _name;
	int _valueRestriction;
	char _shouldBeMinimized;

}

@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign) int valueRestriction;                            //@synthesize valueRestriction=_valueRestriction - In the implementation block
@property (assign) char shouldBeMinimized;                          //@synthesize shouldBeMinimized=_shouldBeMinimized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)valueRestriction;
-(id)markedConstraint;
-(char)shouldBeMinimized;
-(void)setValueRestriction:(int)arg1 ;
-(void)setShouldBeMinimized:(char)arg1 ;
-(oneway void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(char)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
@end

