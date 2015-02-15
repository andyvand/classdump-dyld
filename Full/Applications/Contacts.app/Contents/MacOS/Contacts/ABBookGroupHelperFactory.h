/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:26:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABGroupHelperFactory.h>

@class ABBookWindowScope, NSString;

@interface ABBookGroupHelperFactory : NSObject <ABGroupHelperFactory> {

	ABBookWindowScope* _windowScope;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWindowScope:(id)arg1 ;
-(id)makeCreateGroupFromSelectionAction;
-(id)makeGroupDropPasteboardData:(id)arg1 ;
-(id)makeDropSourceRecordContext:(id)arg1 ;
-(char)isDropLocalToWindow:(id)arg1 ;
-(id)makeDropSource:(id)arg1 ;
-(id)makeDropDestination:(id)arg1 ;
-(id)makeDragSource:(id)arg1 ;
-(char)singleCardDrag;
-(id)makeCopyCommand:(id)arg1 ;
-(id)makeDeleteCommand:(id)arg1 ;
-(id)makeCutCommand:(id)arg1 ;
-(/*^block*/id)makeCreateGroupFromSelectionCommandProvider;
-(id)makeDeleteGroupSheet:(id)arg1 ;
-(id)makePastePasteboardData;
-(id)makePasteboardDataCategorizer:(id)arg1 ;
-(id)makePasteCommandFactory:(id)arg1 ;
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
-(void)dealloc;
@end
