/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewStateBinder.h>

@interface NSPopoverBinder : NSViewStateBinder
+(char)isUsableWithObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
-(char)isBindingReadOnly:(id)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(char)shouldProcessObservations;
-(void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)_updatePopover:(id)arg1 withPositioningRect:(id)arg2 ;
-(void)_updatePopover:(id)arg1 withContentWidth:(id)arg2 contentHeight:(id)arg3 ;
@end

