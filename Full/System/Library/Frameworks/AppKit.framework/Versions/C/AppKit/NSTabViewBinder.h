/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewStateBinder.h>

@interface NSTabViewBinder : NSViewStateBinder
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(id)availableBindings;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2 ;
-(void)_selectInTabView:(id)arg1 itemAtIndex:(id)arg2 ;
-(void)_selectInTabView:(id)arg1 itemWithLabel:(id)arg2 ;
-(void)_selectInTabView:(id)arg1 itemWithIdentifier:(id)arg2 ;
@end

