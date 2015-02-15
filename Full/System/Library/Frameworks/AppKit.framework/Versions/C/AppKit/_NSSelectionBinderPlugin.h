/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSValueBinderPlugin.h>
#import <AppKit/_NSSelectionBinderPlugin.h>

@protocol _NSSelectionBinderPlugin <NSObject,_NSValueBinderPlugin>
@required
-(unsigned long long)allowedContentBindingMask;
-(char)canPopulateWithPlaceholders;
-(char)canMixDynamicAndStaticContent;
-(void)populateObject:(id)arg1 withContent:(id)arg2 valueKey:(id)arg3 objectKey:(id)arg4 insertsNullPlaceholder:(char)arg5;
-(char)canIgnorePopulatingObject:(id)arg1;
-(void)storeModeWhenIgnoringObjectPopulation:(_NSKeyValueCodingControllerModeType)arg1;
-(char)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)arg1;

@end


@class NSString;

@interface _NSSelectionBinderPlugin : _NSValueBinderPlugin <_NSSelectionBinderPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)acceptsMarker:(id)arg1 binding:(id)arg2 overrideWithPlaceholderIfDefined:(char*)arg3 ;
-(unsigned long long)allowedContentBindingMask;
-(char)canPopulateWithPlaceholders;
-(char)canMixDynamicAndStaticContent;
-(void)populateObject:(id)arg1 withContent:(id)arg2 valueKey:(id)arg3 objectKey:(id)arg4 insertsNullPlaceholder:(char)arg5 ;
-(char)canIgnorePopulatingObject:(id)arg1 ;
-(void)storeModeWhenIgnoringObjectPopulation:(_NSKeyValueCodingControllerModeType)arg1 ;
-(char)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)arg1 ;
-(Class)valueClass:(id)arg1 forBinding:(id)arg2 ;
-(char)shouldAlwaysUpdateDisplayValue;
-(Class)_valueClass:(id)arg1 ;
-(void)removeAllContentObjectsInCellOrControl:(id)arg1 ;
-(void)addContentObject:(id)arg1 isPlaceholder:(char)arg2 insertsNullPlaceholder:(char)arg3 value:(id)arg4 index:(long long)arg5 cellOrControl:(id)arg6 ;
@end

