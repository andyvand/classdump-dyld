/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSResponseOperation.h>

@interface MFEWSSyncFolderHierarchyResponseOperation : MFEWSResponseOperation {

	/*^block*/id _createBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _deleteBlock;

}

@property (nonatomic,copy) id createBlock;              //@synthesize createBlock=_createBlock - In the implementation block
@property (nonatomic,copy) id updateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id deleteBlock;              //@synthesize deleteBlock=_deleteBlock - In the implementation block
-(void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2 ;
-(void)executeOperation;
-(void)setCreateBlock:(id)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setDeleteBlock:(id)arg1 ;
-(id)createBlock;
-(id)updateBlock;
-(id)deleteBlock;
@end

