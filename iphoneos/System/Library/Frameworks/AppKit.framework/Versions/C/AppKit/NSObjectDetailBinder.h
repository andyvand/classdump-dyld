/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSEditorBinder.h>

@class NSResponder;

@interface NSObjectDetailBinder : NSEditorBinder {

	NSResponder* _errorPresenter;
	struct {
		unsigned _handlesContentAsCompoundValue : 1;
		unsigned _deletesObjectsOnRemove : 1;
		unsigned _reservedObjectDetailBinder : 30;
	}  _objectDetailBinderFlags;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(void)_connectionWasEstablished;
-(void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3 ;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(id)_referenceBinding;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(char)deletesObjectsOnRemove;
-(void)_useErrorPresenter:(id)arg1 ;
-(char)handlesContentAsCompoundValue;
-(char)setMasterObjectRelationship:(id)arg1 ;
-(char)setMasterObjectRelationship:(id)arg1 refreshDetailContent:(char)arg2 ;
-(void)refreshDetailContent;
-(void)_connectionWasBroken;
-(void)_notifyEditorStateChanged:(char)arg1 ;
-(void)noteContentValueHasChanged;
-(void)setHandlesContentAsCompoundValue:(char)arg1 ;
-(void)setDeletesObjectsOnRemove:(char)arg1 ;
@end

