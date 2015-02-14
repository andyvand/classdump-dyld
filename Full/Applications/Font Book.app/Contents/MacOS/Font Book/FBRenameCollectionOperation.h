/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class FBCollection, NSString;

@interface FBRenameCollectionOperation : NSOperation {

	FBCollection* _collection;
	NSString* _theNewName;

}

@property (retain) FBCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (copy) NSString * theNewName;                    //@synthesize theNewName=_theNewName - In the implementation block
-(void)setTheNewName:(NSString *)arg1 ;
-(NSString *)theNewName;
-(id)initWithCollection:(id)arg1 newName:(id)arg2 ;
-(FBCollection *)collection;
-(void)dealloc;
-(void)main;
-(void)setCollection:(FBCollection *)arg1 ;
@end

