/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNContactPickerInternalResponseDelegate;
@class CNContactPickerView, CNContactListController, ABPersonListSearchController;

@interface CNContactPickerScope : NSObject {

	CNContactPickerView* _pickerView;
	CNContactListController* _contactListController;
	ABPersonListSearchController* _searchController;
	id<CNContactPickerInternalResponseDelegate> _delegate;

}

@property (__weak,readonly) CNContactPickerView * pickerView;                                  //@synthesize pickerView=_pickerView - In the implementation block
@property (__weak,readonly) CNContactListController * contactListController;                   //@synthesize contactListController=_contactListController - In the implementation block
@property (__weak,readonly) ABPersonListSearchController * searchController;                   //@synthesize searchController=_searchController - In the implementation block
@property (__weak,readonly) id<CNContactPickerInternalResponseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithInternalResponseDelegate:(id)arg1 contactListController:(id)arg2 searchController:(id)arg3 pickerView:(id)arg4 ;
-(CNContactListController *)contactListController;
-(CNContactPickerView *)pickerView;
-(id<CNContactPickerInternalResponseDelegate>)delegate;
-(ABPersonListSearchController *)searchController;
@end

