/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/FlickrRequest.h>

@protocol FlickrComposeOptionViewDelegate, FlickrPhotoSetTableDelegate;
@class , NSArray;

@interface FlickrPhotoSetManager : FlickrRequest {

	<FlickrComposeOptionViewDelegate>* _delegate;
	<FlickrPhotoSetTableDelegate>* _tableDelegate;
	NSArray* _photoSets;

}

@property (assign,nonatomic) <FlickrComposeOptionViewDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) <FlickrPhotoSetTableDelegate> * tableDelegate;              //@synthesize tableDelegate=_tableDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * photoSets;                                      //@synthesize photoSets=_photoSets - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)photoSets;
-(void)refreshPhotoSets;
-(id)tableDelegate;
-(void)setTableDelegate:(id)arg1 ;
@end
