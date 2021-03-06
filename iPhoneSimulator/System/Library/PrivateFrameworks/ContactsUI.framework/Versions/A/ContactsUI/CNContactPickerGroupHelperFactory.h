/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ABGroupHelperFactory.h>

@class CNContactPickerScope, NSString;

@interface CNContactPickerGroupHelperFactory : NSObject <ABGroupHelperFactory> {

	CNContactPickerScope* _pickerScope;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPickerScope:(id)arg1 ;
-(id)makeDropHelper:(id)arg1 ;
-(id)makeDragHelper:(id)arg1 ;
-(id)makeCreateSmartGroupHelper;
-(id)makeCreateSmartGroupFromSearchHelper;
-(id)makeImportFilesHelper:(id)arg1 showImportConfirmation:(char)arg2 ;
-(id)makeCreateHelper:(id)arg1 ;
-(id)makeRenameHelper:(id)arg1 ;
-(id)makeDeleteHelper:(id)arg1 ;
-(id)makeCopyHelper:(id)arg1 ;
-(id)makeCutHelper:(id)arg1 ;
-(id)makeSearchingSelectHelper:(id)arg1 ;
-(id)makeEditSmartGroupHelper:(id)arg1 ;
-(id)makeBrowsingSelectHelper:(id)arg1 ;
-(id)makePasteHelper:(id)arg1 ;
-(id)makeSectionSelectHelperWithIdentifier:(id)arg1 ;
@end

