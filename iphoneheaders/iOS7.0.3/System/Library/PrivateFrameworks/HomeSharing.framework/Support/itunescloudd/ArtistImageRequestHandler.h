/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class ArtistImageImporter;

@interface ArtistImageRequestHandler : NSObject {

	ArtistImageImporter* _importer;

}
+(id)handler;
-(void)handleMessage:(unsigned long long)arg1 withDictionary:(id)arg2 forClientConnection:(id)arg3 ;
-(void)cancelAllOperations;
-(void)updateArtistImagesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end
