/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol RUWishlistDataSourceDelegate;
@class RadioModel, NSArray, ;

@interface RUWishlistDataSource : NSObject {

	RadioModel* _model;
	NSArray* _wishlistedTracks;
	<RUWishlistDataSourceDelegate>* _delegate;

}

@property (assign,nonatomic) <RUWishlistDataSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * wishlistedTracks; 
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)wishlistedTracks;
-(void)deleteAllWishlistedTracks;
-(void)deleteWishlistedTrack:(id)arg1 ;
-(void).cxx_destruct;
@end
