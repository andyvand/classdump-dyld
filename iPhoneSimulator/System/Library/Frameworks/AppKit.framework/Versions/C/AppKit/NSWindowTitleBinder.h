/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTitleBinder.h>

@interface NSWindowTitleBinder : NSTitleBinder
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
-(char)isBindingReadOnly:(id)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)window:(id)arg1 didSetTitle:(id)arg2 ;
@end
