/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, CKShareID, NSMutableArray, NSMutableDictionary;

@interface CKModifyShareCommentsOperation : CKOperation {

	NSArray* _commentsToSave;
	NSArray* _commentIDsToDelete;
	CKShareID* _shareID;
	/*^block*/id _modifyShareCommentCompletionBlock;
	NSMutableArray* _savedComments;
	NSMutableDictionary* _commentsToSaveByLocalID;
	NSMutableArray* _deletedCommentIDs;
	NSMutableDictionary* _errorsByCommentID;

}

@property (nonatomic,copy) NSArray * commentsToSave;                                     //@synthesize commentsToSave=_commentsToSave - In the implementation block
@property (nonatomic,copy) NSArray * commentIDsToDelete;                                 //@synthesize commentIDsToDelete=_commentIDsToDelete - In the implementation block
@property (nonatomic,copy) CKShareID * shareID;                                          //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,copy) id modifyShareCommentCompletionBlock;                         //@synthesize modifyShareCommentCompletionBlock=_modifyShareCommentCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedComments;                             //@synthesize savedComments=_savedComments - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commentsToSaveByLocalID;              //@synthesize commentsToSaveByLocalID=_commentsToSaveByLocalID - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedCommentIDs;                         //@synthesize deletedCommentIDs=_deletedCommentIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByCommentID;                    //@synthesize errorsByCommentID=_errorsByCommentID - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(id)initWithCommentsToSave:(id)arg1 commentIDsToDelete:(id)arg2 inShareWithID:(id)arg3 ;
-(void)setModifyShareCommentCompletionBlock:(id)arg1 ;
-(void)setCommentsToSaveByLocalID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)commentsToSaveByLocalID;
-(NSArray *)commentsToSave;
-(void)setCommentsToSave:(NSArray *)arg1 ;
-(NSArray *)commentIDsToDelete;
-(void)setCommentIDsToDelete:(NSArray *)arg1 ;
-(NSMutableDictionary *)errorsByCommentID;
-(void)setErrorsByCommentID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)savedComments;
-(void)setSavedComments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deletedCommentIDs;
-(void)setDeletedCommentIDs:(NSMutableArray *)arg1 ;
-(id)modifyShareCommentCompletionBlock;
@end

