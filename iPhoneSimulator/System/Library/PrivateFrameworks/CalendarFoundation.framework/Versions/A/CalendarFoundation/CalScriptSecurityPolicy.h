/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CalendarFoundation/CalendarFoundation-Structs.h>
@interface CalScriptSecurityPolicy : NSObject
+(char)isWhiteListedApplicationSelector:(SEL)arg1 ;
+(char)allowAuditTokenOnCurrentAppleEventForServiceType:(CFStringRef)arg1 ;
+(char)isWhiteListedCreateClassName:(id)arg1 ;
+(char)allowAuditToken:(SCD_Struct_Ca2)arg1 forServiceType:(CFStringRef)arg2 ;
+(void)setErrorOnCurrentCommand;
+(char)allowApplicationSelector:(SEL)arg1 forServiceType:(CFStringRef)arg2 ;
+(char)allowCreateCommandWithImplementationClassName:(id)arg1 forServiceType:(CFStringRef)arg2 ;
@end

