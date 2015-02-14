/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/FBGroup.h>

@class NSString, NSArray, NSLock;

@interface FBLocaleFontGroup : FBGroup {

	NSString* _displayName;
	NSArray* _languages;
	NSLock* _lock;

}

@property (copy) NSArray * languages;                          //@synthesize languages=_languages - In the implementation block
@property (copy,readonly) NSString * displayName; 
@property (retain) NSLock * lock;                              //@synthesize lock=_lock - In the implementation block
-(id)helpText;
-(id)addFaces:(id)arg1 ;
-(void)addContainers:(id)arg1 ;
-(void)removeContainers:(id)arg1 ;
-(void)_refreshWithFaces:(id)arg1 ;
-(void)refreshWithGroup:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(id)faces;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)dealloc;
-(id)image;
-(NSLock *)lock;
-(char)isEnabled;
-(id)key;
-(id)alternateImage;
-(id)initWithName:(id)arg1 ;
-(NSString *)displayName;
-(void)setLock:(NSLock *)arg1 ;
-(unsigned)flags;
@end

