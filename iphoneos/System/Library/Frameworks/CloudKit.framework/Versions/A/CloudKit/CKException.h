/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CoreFoundation/NSException.h>

@interface CKException : NSException
-(id)initWithCode:(int)arg1 format:(id)arg2 ;
-(id)initWithName:(id)arg1 format:(id)arg2 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 args:(_va_list_tag*)arg3 ;
-(id)initWithName:(id)arg1 format:(id)arg2 args:(_va_list_tag*)arg3 ;
-(int)errorCode;
-(id)error;
@end

