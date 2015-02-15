/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@interface NSControllerConfigurationBinder : NSBinder {

	struct {
		unsigned _ignoreChanges : 1;
		unsigned _reservedControllerConfigurationBinder : 31;
	}  _controllerConfigurationBinderFlags;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(void)_init;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(void)controller:(id)arg1 didChangeToFilterPredicate:(id)arg2 ;
-(void)controller:(id)arg1 didChangeToSortDescriptors:(id)arg2 ;
-(void)controller:(id)arg1 didChangeToSelectionIndexes:(id)arg2 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)_connectionWasBroken;
-(void)_updateSelectionIndexPaths:(id)arg1 ;
-(void)_updateSelectionIndexes:(id)arg1 ;
-(void)_updateSortDescriptors:(id)arg1 ;
-(void)_updateFilterPredicate:(id)arg1 ;
-(void)controller:(id)arg1 didChangeToSelectionIndexPaths:(id)arg2 ;
@end

