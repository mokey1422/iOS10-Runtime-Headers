/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBSectionInfo;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding> {
    BBSectionInfo *_sectionInfo;
}

@property(copy) BBSectionInfo * sectionInfo;

+ (id)factoryFromSectionInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)dataProviders;
- (id)initWithSectionInfo:(id)arg1;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (void)setSectionInfo:(id)arg1;
- (id)sectionIdentifier;
- (id)sectionInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end