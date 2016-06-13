var gulp = require('gulp');
var run = require('gulp-run');

gulp.task('default', ['watch']);

gulp.task('make', function(){
  return run('make clean && make hello && valgrind ./hello Hiya').exec();
});

gulp.task('watch', function () {
  gulp.watch('./hello.c', ['make']);
});
