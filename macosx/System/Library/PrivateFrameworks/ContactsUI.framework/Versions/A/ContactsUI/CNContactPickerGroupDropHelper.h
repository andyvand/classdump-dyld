/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ABGroupDropHelper.h>

@protocol NSDraggingInfo;
@class CNContactPickerView, NSString;

@interface CNContactPickerGroupDropHelper : NSObject <ABGroupDropHelper> {

	id<NSDraggingInfo> _draggingInfo;
	CNContactPickerView* _pickerView;
	NSString* _selectedEntryIdentifier;
	NSString* _destinationEntryIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDraggingInfo:(id)arg1 pickerView:(id)arg2 selectedEntryIdentifier:(id)arg3 destinationEntryIdentifier:(id)arg4 ;
-(unsigned long long)validateDrop;
-(char)acceptDrop;
@end

