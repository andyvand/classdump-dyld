/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/SearchResultResourceRequest.h>

@class GEOPhotoInfo;

@interface SearchResultImageRequest : SearchResultResourceRequest {

	GEOPhotoInfo* _info;
	/*^block*/ id _imageHandler;

}

@property (retain) GEOPhotoInfo * info;                  //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id imageHandler;              //@synthesize imageHandler=_imageHandler - In the implementation block
+(id)requestWithSearchResult:(id)arg1 info:(id)arg2 ;
-(void)setImageHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)imageHandler;
-(void)dealloc;
-(id)info;
-(id)url;
-(void)setInfo:(id)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)handleData:(id)arg1 ;
@end
