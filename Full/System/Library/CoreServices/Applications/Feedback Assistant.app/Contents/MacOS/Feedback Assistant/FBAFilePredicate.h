/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/FBAManagedFeedbackObject.h>

@class NSSet;

@interface FBAFilePredicate : FBAManagedFeedbackObject

@property (assign) char alwaysRequired; 
@property (retain) NSSet * conditions; 
@property (retain) NSSet * matchers; 
-(char)satisfiedBy:(id)arg1 ;
@end

