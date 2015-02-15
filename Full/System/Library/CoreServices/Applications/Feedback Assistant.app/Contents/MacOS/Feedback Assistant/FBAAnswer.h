/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/FBAManagedFeedbackObject.h>

@class FBAFormResponse, FBAQuestion, NSNumber, NSArray;

@interface FBAAnswer : FBAManagedFeedbackObject

@property (retain) FBAFormResponse * formResponse; 
@property (retain) FBAQuestion * question; 
@property (retain) NSNumber * questionID; 
@property (copy) NSArray * values; 
@property (retain) id value; 
@property (getter=isOptedOut) char optedOut; 
@property (assign) char resolved; 
@property (retain) NSNumber * primitiveOptedOut; 
+(id)keyPathsForValuesAffectingValue;
-(char)isOptedOut;
-(void)setOptedOut:(char)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
@end

