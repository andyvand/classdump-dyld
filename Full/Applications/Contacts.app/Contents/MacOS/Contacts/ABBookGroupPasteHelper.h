/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABGroupActionHelper.h>

@protocol ABGroupPasteCommandFactory, ABCommandExecutor;
@class ABBookGroupPasteCategorizer, NSString;

@interface ABBookGroupPasteHelper : NSObject <ABGroupActionHelper> {

	ABBookGroupPasteCategorizer* _pasteboardDataCategorizer;
	id<ABGroupPasteCommandFactory> _pasteCommandFactory;
	id<ABCommandExecutor> _commandExecutor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPasteboardDataCategorizer:(id)arg1 commandFactory:(id)arg2 commandExecutor:(id)arg3 ;
-(id)makePasteCommand;
-(id)initWithRecordContext:(id)arg1 groups:(id)arg2 pasteboardData:(id)arg3 commandExecutor:(id)arg4 pasteCommandFactory:(id)arg5 ;
-(void)performAction;
-(id)actionName;
-(void)dealloc;
@end

