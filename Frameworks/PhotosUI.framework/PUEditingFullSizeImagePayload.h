/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditingFullSizeImagePayload : NSObject <NSSecureCoding> {
    int  _imageOrientation;
    NSString * _sandboxExtensionToken;
    NSURL * _url;
}

@property (nonatomic) int imageOrientation;
@property (nonatomic, retain) NSString *sandboxExtensionToken;
@property (setter=setURL:, nonatomic, retain) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (int)imageOrientation;
- (id)initWithCoder:(id)arg1;
- (id)sandboxExtensionToken;
- (void)setImageOrientation:(int)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end