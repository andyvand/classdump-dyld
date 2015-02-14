/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSObjectDetailBinder.h>

@interface NSArrayDetailBinder : NSObjectDetailBinder {

	struct {
		unsigned _selectsAllWhenSettingContent : 1;
		unsigned _usedMultipleSelectionArray : 1;
		unsigned _reservedArrayDetailBinder : 30;
	}  _arrayDetailBinderFlags;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)binderClassesSuperseded;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(char)isBindingReadOnly:(id)arg1 ;
-(id)availableBindings;
-(void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3 ;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(id)_referenceBinding;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(char)_canGuaranteeOrderOfContentObjects;
-(char)insertObjectIntoMasterArrayRelationship:(id)arg1 atIndex:(unsigned long long)arg2 selectionMode:(int*)arg3 ;
-(char)addObjectToMasterArrayRelationship:(id)arg1 selectionMode:(int*)arg2 ;
-(char)insertObjectsIntoMasterArrayRelationship:(id)arg1 atIndexes:(id)arg2 selectionMode:(int*)arg3 ;
-(char)addObjectsToMasterArrayRelationship:(id)arg1 selectionMode:(int*)arg2 ;
-(char)removeObjectFromMasterArrayRelationshipAtIndex:(unsigned long long)arg1 selectionMode:(int*)arg2 ;
-(char)removeObjectsFromMasterArrayRelationshipAtIndexes:(id)arg1 selectionMode:(int*)arg2 ;
-(void)setSelectsAllWhenSettingContent:(char)arg1 ;
-(char)selectsAllWhenSettingContent;
-(char)_handlesSelectAll;
-(void)_selectAllContent:(id)arg1 inDetailController:(id)arg2 ;
-(void)_refreshDetailContentInBackground:(char)arg1 ;
-(char)_performArrayBinderOperation:(long long)arg1 singleObject:(id)arg2 multipleObjects:(id)arg3 singleIndex:(unsigned long long)arg4 multipleIndexes:(id)arg5 selectionMode:(int*)arg6 ;
-(void)refreshDetailContent;
@end

