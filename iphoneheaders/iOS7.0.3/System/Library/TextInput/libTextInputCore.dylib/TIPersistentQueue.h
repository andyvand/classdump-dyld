/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface TIPersistentQueue : NSObject {

	NSURL* _presentedItemURL;

}
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)readObjects:(/*^block*/ id)arg1 ;
-(void)enqueueObjects:(/*^block*/ id)arg1 ;
-(void)dequeueObjects:(/*^block*/ id)arg1 ;
@end
