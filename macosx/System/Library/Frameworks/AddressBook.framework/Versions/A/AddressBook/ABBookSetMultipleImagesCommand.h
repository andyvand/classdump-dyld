/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABBookUndoableCommand.h>

@protocol ABUndoableCommand;
@class ABAddressBook;

@interface ABBookSetMultipleImagesCommand : ABBookUndoableCommand {

	ABAddressBook* _addressBook;
	char _shouldSave;
	id<ABUndoableCommand> _aggregateCommand;
	/*^block*/id _didExecuteBlock;

}

@property (copy) id didExecuteBlock;              //@synthesize didExecuteBlock=_didExecuteBlock - In the implementation block
+(id)makeAggregateCommandWithAddressBook:(id)arg1 uniqueIds:(id)arg2 imageData:(id)arg3 largeImageData:(id)arg4 clippingRect:(CGRect)arg5 shouldSave:(char)arg6 ;
-(void)execute;
-(void)executeUndo;
-(id)actionName;
-(void)executeRedo;
-(void)willExecute;
-(void)didExecute;
-(id)initWithAddressBook:(id)arg1 uniqueIds:(id)arg2 imageData:(id)arg3 largeImageData:(id)arg4 clippingRect:(CGRect)arg5 shouldSave:(char)arg6 ;
-(void)setDidExecuteBlock:(id)arg1 ;
-(id)didExecuteBlock;
-(void)dealloc;
@end

