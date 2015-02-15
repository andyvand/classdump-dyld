/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCommandVisitor.h>

@class NSString;

@interface ABUndoableCommandVisitor : NSObject <ABCommandVisitor> {

	/*^block*/id _didExecuteCommandWithSaveRequest;

}

@property (nonatomic,copy) id didExecuteCommandWithSaveRequest;              //@synthesize didExecuteCommandWithSaveRequest=_didExecuteCommandWithSaveRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)executeVisitor;
+(id)executeUndoVisitor;
+(id)executeRedoVisitor;
+(id)visitor;
-(void)visitUndoableCommand:(id)arg1 ;
-(void)visitCommand:(id)arg1 ;
-(void)visitSaveRequestCommand:(id)arg1 ;
-(void)setDidExecuteCommandWithSaveRequest:(id)arg1 ;
-(id)makeSaveRequest;
-(void)postProcessSaveRequest:(id)arg1 ;
-(id)didExecuteCommandWithSaveRequest;
-(void)dealloc;
@end

