/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TRenameOperation.h>

@interface FI_TNewFolderOperation : FI_TRenameOperation {

	BOOL _isRenaming;

}
-(int)createNewFolder:(const TString*)arg1 properties:(const TFENodePropertyList*)arg2 ;
-(id)newDelegate;
-(void)configureOperationRecord:(TOperationRecord*)arg1 forNode:(const TFENode*)arg2 ;
-(void)reconfigureToRenameNodes:(const TFENodeVector*)arg1 ;
@end

