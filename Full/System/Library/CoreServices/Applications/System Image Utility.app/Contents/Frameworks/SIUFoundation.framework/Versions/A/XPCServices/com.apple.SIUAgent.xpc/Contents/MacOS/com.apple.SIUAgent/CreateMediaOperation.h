/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Frameworks/SIUFoundation.framework/Versions/A/XPCServices/com.apple.SIUAgent.xpc/Contents/MacOS/com.apple.SIUAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.SIUAgent/com.apple.SIUAgent-Structs.h>
#import <com.apple.SIUAgent/CreateImageOperation.h>

@interface CreateMediaOperation : CreateImageOperation
-(char)isSecCodesigned:(SecCodeRef)arg1 error:(id*)arg2 ;
-(id)errorForSecCode:(int)arg1 ;
-(id)betterErrorForError:(id)arg1 ;
-(char)isProcessSigned:(int)arg1 error:(id*)arg2 ;
-(void)main;
@end

