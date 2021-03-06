/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/FBScriptableObject.h>
#import <Font Book/FBObject.h>
#import <Font Book/FBFont.h>
#import <Font Book/FBObjectMutation.h>
#import <Font Book/FBFaceGroup.h>
#import <Font Book/NSCoding.h>

@class FBUniqueString, NSArray, NSString, NSImage;

@interface FBFamily : NSObject <FBScriptableObject, FBObject, FBFont, FBObjectMutation, FBFaceGroup, NSCoding> {

	FBUniqueString* _name;
	NSArray* _faces;
	char _facesAreSorted;

}

@property (assign) char _facesAreSorted;                            //@synthesize facesAreSorted=_facesAreSorted - In the implementation block
@property (readonly) char isDownloadableStub; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * name; 
@property (retain,readonly) NSString * displayName; 
@property (retain,readonly) NSString * helpText; 
@property (retain,readonly) NSImage * image; 
@property (retain,readonly) NSImage * alternateImage; 
@property (readonly) long long numberOfChildren; 
@property (retain,readonly) NSArray * children; 
@property (readonly) char isEnabled; 
@property (readonly) char isDuplicate; 
@property (readonly) char isDuplicated; 
@property (readonly) char hasDuplicates; 
@property (retain,readonly) NSArray * duplicates; 
@property (readonly) char isSystemFont; 
@property (readonly) char isProtected; 
@property (readonly) char isLocked; 
@property (retain,readonly) NSArray * files; 
@property (retain,readonly) id sampleFont; 
+(id)familiesForFaces:(id)arg1 ;
+(id)filterFontFacePairs:(id)arg1 ;
+(id)_sampleNames;
+(id)familyWithName:(id)arg1 andFaces:(id)arg2 ;
-(id)families;
-(NSString *)helpText;
-(char)isDownloadableStub;
-(id)unsortedFaces;
-(id)sampleFont;
-(char)isDuplicated;
-(char)hasDuplicates;
-(char)isSystemFont;
-(NSArray *)duplicates;
-(id)initWithName:(id)arg1 andFaces:(id)arg2 ;
-(char)_facesAreSorted;
-(void)set_facesAreSorted:(char)arg1 ;
-(id)appleScriptName;
-(id)appleScriptLocalizedName;
-(id)appleScriptFiles;
-(char)appleScriptEnabled;
-(id)applescriptDescription;
-(void)setAppleScriptEnabled:(id)arg1 ;
-(id)appleScriptFaces;
-(char)isInstalled;
-(long long)numberOfChildren;
-(long long)compareByName:(id)arg1 ;
-(char)isProtected;
-(id)disable;
-(NSArray *)files;
-(id)faces;
-(void)dealloc;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSImage *)image;
-(char)isEnabled;
-(id)key;
-(id)objectSpecifier;
-(id)descriptor;
-(long long)compare:(id)arg1 ;
-(NSImage *)alternateImage;
-(char)isDuplicate;
-(NSString *)displayName;
-(char)isLocked;
-(NSArray *)children;
-(id)enable;
-(void)_enable;
-(void)_disable;
@end

