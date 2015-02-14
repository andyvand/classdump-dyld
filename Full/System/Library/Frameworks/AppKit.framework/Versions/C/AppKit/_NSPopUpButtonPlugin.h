/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSSelectionBinderPlugin.h>

@interface _NSPopUpButtonPlugin : _NSSelectionBinderPlugin {

	unsigned long long _dynamicContentPlacementIndex;
	NSKeyValueCodingControllerModeType _modeWhileIgnoringPopUpPopulation;
	id _dynamicallyGeneratedItems;

}
-(void)dealloc;
-(id)initWithBinder:(id)arg1 object:(id)arg2 ;
-(void)connectionWasEstablished:(id)arg1 ;
-(unsigned long long)allowedValueBindingMask;
-(unsigned long long)allowedContentBindingMask;
-(char)canMixDynamicAndStaticContent;
-(char)canIgnorePopulatingObject:(id)arg1 ;
-(void)storeModeWhenIgnoringObjectPopulation:(_NSKeyValueCodingControllerModeType)arg1 ;
-(char)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)arg1 ;
-(Class)valueClass:(id)arg1 forBinding:(id)arg2 ;
-(void)actionHasEnded:(id)arg1 sender:(id)arg2 ;
-(char)shouldIgnoreAction:(id)arg1 ;
-(void)showValue:(id)arg1 inObject:(id)arg2 ;
-(id)shownValueInObject:(id)arg1 ;
-(id)objectMechanismsRequired;
-(Class)_valueClass:(id)arg1 ;
-(void)removeAllContentObjectsInCellOrControl:(id)arg1 ;
-(void)addContentObject:(id)arg1 isPlaceholder:(char)arg2 insertsNullPlaceholder:(char)arg3 value:(id)arg4 index:(long long)arg5 cellOrControl:(id)arg6 ;
-(char)isMemberOfDynamicallyGeneratedMenuItems:(id)arg1 ;
-(void)forgetAllDynamicallyGeneratedMenuItems;
-(id)_insertPopUpButtonItemInCellOrControl:(id)arg1 title:(id)arg2 representedObject:(id)arg3 menuItemIndex:(long long)arg4 index:(long long)arg5 ;
-(long long)_supposedNumberOfItems;
-(void)forgetDynamicallyGeneratedMenuItem:(id)arg1 ;
-(void)_clearUnneccessaryItems:(id)arg1 ;
-(void)recordDynamicallyGeneratedMenuItem:(id)arg1 ;
-(char)_shouldCreateSelectionItemInControl:(id)arg1 ;
@end

