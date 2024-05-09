import java.util.*

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    var t = scanner.nextInt()
    while (t-- > 0) {
        val m = mutableMapOf<Int, Int>()
        val n = scanner.nextInt()
        val arr = IntArray(n)
        for (i in 0 until n) {
            arr[i] = scanner.nextInt()
            m[arr[i]] = m.getOrDefault(arr[i], 0) + 1
        }
        for (i in 0 until n) {
            if (m[arr[i]] == 1) {
                println(i + 1)
                break
            }
        }
    }
}