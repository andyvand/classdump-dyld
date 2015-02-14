/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <Font Book/FBGroupOperations.h>
#import <Font Book/NSCoding.h>
#import <Font Book/NSCopying.h>
#import <Font Book/FBObject.h>
#import <Font Book/FBObjectMutation.h>
#import <Font Book/FBFaceGroup.h>

@class NSString, NSImage, NSArray;

@interface FBGroup : NSObject <FBGroupOperations, NSCoding, NSCopying, FBObject, FBObjectMutation, FBFaceGroup> {

	NSString* _name;

}

@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSString * displayName; 
@property (retain,readonly) NSString * helpText; 
@property (retain,readonly) NSImage * image; 
@property (retain,readonly) NSImage * alternateImage; 
@property (readonly) long long numberOfChildren; 
@property (retain,readonly) NSArray * children; 
@property (readonly) char isEnabled; 
-(id)families;
-(id)installFiles:(id)arg1 withOptions:(unsigned)arg2 ;
-(NSString *)helpText;
-(id)addFaces:(id)arg1 ;
-(id)removeFaces:(id)arg1 ;
-(void)_addFaces:(id)arg1 ;
-(void)_removeFaces:(id)arg1 ;
-(id)unsortedFaces;
-(id)renameWithName:(id)arg1 ;
-(id)addAndSelect;
-(id)addAndSelectWithoutEdit;
-(void)addFontsFromFiles:(id)arg1 ;
-(void)removeFontsFromFiles:(id)arg1 ;
-(void)removeFacesObject:(id)arg1 ;
-(void)removeFilesObject:(id)arg1 ;
-(id)removeFiles:(id)arg1 ;
-(long long)numberOfChildren;
-(id)disable;
-(void)_setName:(id)arg1 ;
-(id)faces;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSImage *)image;
-(char)isEnabled;
-(id)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSImage *)alternateImage;
-(id)initWithName:(id)arg1 ;
-(NSString *)displayName;
-(id)remove;
-(NSArray *)children;
-(id)enable;
-(unsigned)flags;
-(void)_enable;
-(void)_disable;
-(id)add;
@end

