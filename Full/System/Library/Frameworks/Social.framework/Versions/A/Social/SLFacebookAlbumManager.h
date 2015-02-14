/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLFacebookAlbumManagerDelegate;
@class NSOperationQueue, ACAccount, SLFacebookAlbum;

@interface SLFacebookAlbumManager : NSObject {

	char _isCanceled;
	NSOperationQueue* photoQueue;
	ACAccount* _account;
	id<SLFacebookAlbumManagerDelegate> _delegate;
	SLFacebookAlbum* _selectedAlbum;

}

@property (retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (__weak) id<SLFacebookAlbumManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) SLFacebookAlbum * selectedAlbum;                          //@synthesize selectedAlbum=_selectedAlbum - In the implementation block
-(id)checkErrorResponse:(id)arg1 ;
-(id)parseAlbumsWithResponse:(id)arg1 ;
-(id)defaultAlbumWithDefaultAlbumResponse:(id)arg1 ;
-(SLFacebookAlbum *)selectedAlbum;
-(void)setSelectedAlbum:(SLFacebookAlbum *)arg1 ;
-(void)handleAlbumResponse:(id)arg1 error:(id)arg2 ;
-(void)performAlbumRequestWithBatchRequests:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)handleDefaultAlbumFetchResponse:(id)arg1 handler:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)refreshAlbums;
-(void)fetchDefaultAlbum:(/*^block*/id)arg1 ;
-(void)loadCoverImageForAlbum:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setDelegate:(id<SLFacebookAlbumManagerDelegate>)arg1 ;
-(id<SLFacebookAlbumManagerDelegate>)delegate;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end

